/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

typedef struct _NSZone NSZone;

typedef struct _GEOTileKey {
	unsigned _field1 : 6;
	unsigned _field2 : 26;
	unsigned _field3 : 26;
	unsigned _field4 : 6;
	unsigned _field5 : 8;
	unsigned _field6 : 8;
	unsigned _field7 : 8;
	unsigned _field8 : 1;
	unsigned _field9 : 7;
	unsigned char _field10[4];
} GEOTileKey;

typedef struct Connection Connection;

typedef struct Requester {
	/*function-pointer*/ void **_field1;
	int _field2;
	Connection *_field3;
	char *_field4;
	bool _field5;
	bool _field6;
} Requester;

typedef struct Response {
	/*function-pointer*/ void **_field1;
	id _field2;
} Response;

typedef struct Point {
	int _field1;
	int _field2;
} Point;

typedef struct InputDataStream {
	char *_field1;
	unsigned _field2;
	unsigned _field3;
	bool _field4;
	bool _field5;
} InputDataStream;

typedef struct {
	unsigned _field1 : 6;
	unsigned _field2 : 26;
	unsigned _field3 : 26;
	unsigned _field4 : 6;
} XXStruct_j8inqB;

typedef struct MapPoint {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
} MapPoint;

typedef struct {
	int *list;
	unsigned count;
	unsigned size;
} XXStruct_WmZAAA;

typedef struct {
	double _field1;
	double _field2;
} XXStruct_UNJ7RC;

typedef struct {
	long long *list;
	unsigned count;
	unsigned size;
} XXStruct_19EQxD;

typedef struct _opaque_pthread_mutex_t {
	long _field1;
	BOOL _field2[40];
} opaque_pthread_mutex_t;

typedef struct sqlite3 sqlite3;

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct TileStore {
	long long _field1;
	opaque_pthread_mutex_t _field2;
	char *_field3;
	sqlite3 *_field4;
	sqlite3_stmt *_field5;
	sqlite3_stmt *_field6;
	sqlite3_stmt *_field7;
	sqlite3_stmt *_field8;
	sqlite3_stmt *_field9;
	sqlite3_stmt *_field10;
	sqlite3_stmt *_field11;
	sqlite3_stmt *_field12;
} TileStore;

typedef struct CGImage *CGImageRef;

typedef struct CGColor *CGColorRef;

typedef struct CGSize {
	float _field1;
	float _field2;
} CGSize;

