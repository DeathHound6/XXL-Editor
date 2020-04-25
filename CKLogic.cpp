#include "CKLogic.h"
#include "File.h"
#include "KEnvironment.h"
#include "CKNode.h"
#include <cassert>

void CGround::deserialize(KEnvironment * kenv, File * file, size_t length)
{
	this->numa = file->readUint32();
	uint16_t numTris = file->readUint16();
	uint16_t numVerts = file->readUint16();
	this->triangles.resize(numTris);
	this->vertices.resize(numVerts);
	for (Triangle &tri : this->triangles) {
		for (auto &coord : tri.indices)
			coord = file->readUint16();
	}
	for (Vector3 &vert : this->vertices) {
		vert.x = file->readFloat();
		vert.y = file->readFloat();
		vert.z = file->readFloat();
	}
	for (float &c : this->aabb)
		c = file->readFloat();
	param1 = file->readUint16();
	param2 = file->readUint16();
	uint16_t numInfWalls = file->readUint16();
	infiniteWalls.resize(numInfWalls);
	for (InfiniteWall &infwall : infiniteWalls) {
		for (auto &ix : infwall.baseIndices)
			ix = file->readUint16();
	}
	uint16_t numFinWalls = file->readUint16();
	finiteWalls.resize(numFinWalls);
	for (FiniteWall &wall : finiteWalls) {
		for (auto &ix : wall.baseIndices)
			ix = file->readUint16();
		for (auto &h : wall.heights)
			h = file->readFloat();
	}
	this->param3 = file->readFloat();
	this->param4 = file->readFloat();
	assert(this->numa == (((6 * numTris + 12 * numVerts + 4 * numInfWalls + 12 * numFinWalls)+3)&~3));
}

void CGround::serialize(KEnvironment * kenv, File * file)
{
	//file->writeUint32(this->numa);
	file->writeUint32(((6 * triangles.size() + 12 * vertices.size() + 4 * infiniteWalls.size() + 12 * finiteWalls.size())+3)&~3);
	file->writeUint16(this->triangles.size());
	file->writeUint16(this->vertices.size());
	for (Triangle &tri : this->triangles) {
		for (auto &coord : tri.indices)
			file->writeUint16(coord);
	}
	for (Vector3 &vert : this->vertices) {
		file->writeFloat(vert.x);
		file->writeFloat(vert.y);
		file->writeFloat(vert.z);
	}
	for (float &c : this->aabb)
		file->writeFloat(c);
	file->writeUint16(param1);
	file->writeUint16(param2);
	file->writeUint16(infiniteWalls.size());
	for (InfiniteWall &infwall : infiniteWalls) {
		for (auto &ix : infwall.baseIndices)
			file->writeUint16(ix);
	}
	file->writeUint16(finiteWalls.size());
	for (FiniteWall &wall : finiteWalls) {
		for (auto &ix : wall.baseIndices)
			file->writeUint16(ix);
		for (auto &h : wall.heights)
			file->writeFloat(h);
	}
	file->writeFloat(this->param3);
	file->writeFloat(this->param4);
}

void CKMeshKluster::deserialize(KEnvironment * kenv, File * file, size_t length)
{
	for (float &f : aabb)
		f = file->readFloat();
	uint16_t numGrounds = file->readUint16();
	uint16_t numWalls = file->readUint16();
	unk2 = file->readUint16();
	assert(unk2 == 0);
	grounds.reserve(numGrounds);
	for (uint16_t i = 0; i < numGrounds; i++) {
		grounds.push_back(kenv->readObjRef<CGround>(file));
	}
	walls.reserve(numWalls);
	for (uint16_t i = 0; i < numWalls; i++) {
		walls.push_back(kenv->readObjRef<CKObject>(file));
	}
	unkRef = kenv->readObjRef<CKObject>(file);
}

void CKMeshKluster::serialize(KEnvironment * kenv, File * file)
{
	for (float &f : aabb)
		file->writeFloat(f);
	file->writeUint16(grounds.size());
	file->writeUint16(walls.size());
	file->writeUint16(unk2);
	for (auto &ref : grounds) {
		kenv->writeObjRef(file, ref);
	}
	for (auto &ref : walls) {
		kenv->writeObjRef(file, ref);
	}
	kenv->writeObjRef(file, unkRef);
}

void CKSector::deserialize(KEnvironment * kenv, File * file, size_t length)
{
	//sgRoot = kenv->readObjRef<CKObject>(file);
	file->seek(4, SEEK_CUR);
	strId = file->readUint16();
	unk1 = file->readUint16();
	uint32_t numSases = file->readUint32();
	for (uint32_t i = 0; i < numSases; i++)
		sases.push_back(kenv->readObjRef<CKObject>(file));
	//soundDictionary = kenv->readObjRef<CKObject>(file);
	//beaconKluster = kenv->readObjRef<CKObject>(file);
	//meshKluster = kenv->readObjRef<CKObject>(file);
	file->seek(12, SEEK_CUR);
	for (float &f : boundaries)
		f = file->readFloat();
	unk2 = file->readUint32();
}

void CKSector::serialize(KEnvironment * kenv, File * file)
{
	KObjectList &objlist = (strId == 0) ? kenv->levelObjects : kenv->sectorObjects[strId-1];
	CKObject *fndSGRoot, *fndSoundDictionary, *fndBeaconKluster = nullptr, *fndMeshKluster;
	fndSGRoot = objlist.getClassType<CSGSectorRoot>().objects[0];
	fndSoundDictionary = objlist.getClassType(9, 3).objects[0];
	if(!objlist.getClassType(12, 73).objects.empty())
		fndBeaconKluster = objlist.getClassType(12, 73).objects[0];
	fndMeshKluster = objlist.getClassType<CKMeshKluster>().objects[0];

	kenv->writeObjID(file, fndSGRoot);
	file->writeUint16(strId);
	file->writeUint16(unk1);
	file->writeUint32(sases.size());
	for (auto &sas : sases)
		kenv->writeObjRef(file, sas);
	kenv->writeObjID(file, fndSoundDictionary);
	kenv->writeObjID(file, fndBeaconKluster);
	kenv->writeObjID(file, fndMeshKluster);
	for (float &f : boundaries)
		file->writeFloat(f);
	file->writeUint32(unk2);
}

void CKBeaconKluster::deserialize(KEnvironment * kenv, File * file, size_t length)
{
	nextKluster = kenv->readObjRef<CKBeaconKluster>(file);
	bounds.deserialize(file, true);
	uint16_t numBings = file->readUint16();
	numUsedBings = file->readUint16();
	bings.resize(numBings);
	for (Bing &bing : bings) {
		bing.active = file->readUint8() != 0;
		if (bing.active) {
			bing.numBeacons = file->readUint32();
			bing.unk2a = file->readUint8();
			bing.numBits = file->readUint8();
			bing.handlerId = file->readUint8();
			bing.sectorIndex = file->readUint8();
			bing.klusterIndex = file->readUint8();
			bing.handlerIndex = file->readUint8();
			bing.bitIndex = file->readUint16();
			if (bing.numBeacons != 0) {
				bing.handler = kenv->readObjRef<CKObject>(file);
				bing.unk6 = file->readUint32();
				bing.beacons.resize(bing.numBeacons);
				for (Beacon &beacon : bing.beacons) {
					beacon.posx = file->readUint16();
					beacon.posy = file->readUint16();
					beacon.posz = file->readUint16();
					beacon.params = file->readUint16();
				}
			}
		}
	}
}

void CKBeaconKluster::serialize(KEnvironment * kenv, File * file)
{
	kenv->writeObjRef(file, nextKluster);
	bounds.serialize(file, true);
	file->writeUint16(bings.size());
	file->writeUint16(numUsedBings);
	for (Bing &bing : bings) {
		file->writeUint8(bing.active ? 1 : 0);
		if (bing.active) {
			file->writeUint32(bing.beacons.size());
			file->writeUint8(bing.unk2a);
			file->writeUint8(bing.numBits);
			file->writeUint8(bing.handlerId);
			file->writeUint8(bing.sectorIndex);
			file->writeUint8(bing.klusterIndex);
			file->writeUint8(bing.handlerIndex);
			file->writeUint16(bing.bitIndex);
			if (bing.beacons.size() != 0) {
				kenv->writeObjRef(file, bing.handler);
				file->writeUint32(bing.unk6);
				for (Beacon &beacon : bing.beacons) {
					file->writeUint16(beacon.posx);
					file->writeUint16(beacon.posy);
					file->writeUint16(beacon.posz);
					file->writeUint16(beacon.params);
				}
			}
		}
	}
}

void CKSas::deserialize(KEnvironment * kenv, File * file, size_t length)
{
	sector[0] = file->readUint32();
	sector[1] = file->readUint32();
	for (auto &box : boxes) {
		for (float &f : box.highCorner)
			f = file->readFloat();
		for (float &f : box.lowCorner)
			f = file->readFloat();
	}
}

void CKSas::serialize(KEnvironment * kenv, File * file)
{
	file->writeUint32(sector[0]);
	file->writeUint32(sector[1]);
	for (auto &box : boxes) {
		for (float &f : box.highCorner)
			file->writeFloat(f);
		for (float &f : box.lowCorner)
			file->writeFloat(f);
	}
}

void CDynamicGround::deserialize(KEnvironment * kenv, File * file, size_t length)
{
	CGround::deserialize(kenv, file, length);
	for (float &c : mpos)
		c = file->readFloat();
	for (float &c : mrot)
		c = file->readFloat();
	//node = kenv->readObjRef<CKSceneNode>(file);
	nodeId = file->readUint32();
	for (int i = 0; i < 16; i++)
		transform.v[i] = file->readFloat();
}

void CDynamicGround::serialize(KEnvironment * kenv, File * file)
{
	CGround::serialize(kenv, file);
	for (float &c : mpos)
		file->writeFloat(c);
	for (float &c : mrot)
		file->writeFloat(c);
	kenv->writeObjRef(file, node);
	for (int i = 0; i < 16; i++)
		file->writeFloat(transform.v[i]);
}

void CDynamicGround::onLevelLoaded(KEnvironment * kenv)
{
	int strnum = 0;
	int numfnd = 0;
	for (auto &str : kenv->sectorObjects) {
		if (CKMeshKluster *mk = str.getFirst<CKMeshKluster>()) {
			auto it = std::find_if(mk->grounds.begin(), mk->grounds.end(), [this](kobjref<CGround> &gnd) {return gnd.get() == this; });
			if (it != mk->grounds.end()) {
				auto rnode = kenv->getObjRef<CKSceneNode>(nodeId, strnum);
				if (node.get())
					assert(node == rnode);
				node = rnode;
				numfnd++;
				continue;
			}
		}
		strnum++;
	}
	if (!node.get())
		node = kenv->getObjRef<CKSceneNode>(nodeId);
}
