/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FastJPEG.framework/FastJPEG
 */

typedef struct __IOSurface *IOSurfaceRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct ffjdec ffjdec;

typedef struct jpegDecoder {
	ffjdec *_field1;
	id _field2;
} jpegDecoder;

typedef struct iosPoolOpaque iosPoolOpaque;

typedef struct CGImage *CGImageRef;

typedef struct lruEntry lruEntry;
typedef struct entryList {
	lruEntry *tqh_first;
	lruEntry **tqh_last;
} entryList;

struct lruEntry {
	id _field1;
	int _field2;
	entryList _field3;
};

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;


