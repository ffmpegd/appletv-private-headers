/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFontScheme, OADColorMap, OADColorScheme, OAVState, OCPPackagePart, OAXTableStyleCache, NSMutableArray, NSMutableDictionary, OAXClient, OADBlipCollection, OADStyleMatrix;

@interface OAXDrawingState : NSObject {
	OAXClient *mClient;	// 4 = 0x4
	OCPPackagePart *mPackagePart;	// 8 = 0x8
	OADStyleMatrix *mStyleMatrix;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	id mDocumentState;	// 24 = 0x18
	OADBlipCollection *mTgtBlipCollection;	// 28 = 0x1c
	NSMutableDictionary *mSrcURLToTgtBlipIndexMap;	// 32 = 0x20
	NSMutableArray *mTgtBulletBlips;	// 36 = 0x24
	NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;	// 40 = 0x28
	OAVState *mOavState;	// 44 = 0x2c
	OADColorScheme *mColorScheme;	// 48 = 0x30
	OADColorMap *mColorMap;	// 52 = 0x34
	OADFontScheme *mFontScheme;	// 56 = 0x38
}
@property(retain) id colorMap;	// G=0x37a3f765; S=0x379dc555; converted property
@property(retain) id colorScheme;	// G=0x37a3f751; S=0x37982b99; converted property
@property(retain) id documentState;	// G=0x37a01ac9; S=0x379d9e99; converted property
@property(retain) id fontScheme;	// G=0x37a3f779; S=0x379dc519; converted property
@property(retain) id oavState;	// G=0x37990f11; S=0x379acbe1; converted property
@property(retain) id packagePart;	// G=0x3798f6f5; S=0x3797fd25; converted property
@property(retain) id styleMatrix;	// G=0x379dc809; S=0x37982a69; converted property
@property(retain) id tableStyleCache;	// G=0x379deafd; S=0x379dc49d; converted property
@property(retain) id targetBlipCollection;	// G=0x37991cad; S=0x3797f49d; converted property
- (id)init;	// 0x37afbe51
- (id)initWithClient:(id)client;	// 0x3797f379
- (id)blipRefForURL:(id)url;	// 0x3798fd35
- (id)blipRefWithURL:(id)url blipArray:(id)array blipURLtoIndexMap:(id)map;	// 0x3798fded
- (id)bulletBlipRefForURL:(id)url;	// 0x37a358fd
- (void)clearDrawableForShapeIdMap;	// 0x379e38b9
- (void)clearTargetBlipCollection;	// 0x37a3f78d
- (id)client;	// 0x37990e0d
// converted property getter: - (id)colorMap;	// 0x37a3f765
// converted property getter: - (id)colorScheme;	// 0x37a3f751
- (void)dealloc;	// 0x3799ceb9
// converted property getter: - (id)documentState;	// 0x37a01ac9
- (id)drawableForShapeId:(unsigned long)shapeId;	// 0x379e739d
// converted property getter: - (id)fontScheme;	// 0x37a3f779
// converted property getter: - (id)oavState;	// 0x37990f11
// converted property getter: - (id)packagePart;	// 0x3798f6f5
// converted property setter: - (void)setColorMap:(id)map;	// 0x379dc555
// converted property setter: - (void)setColorScheme:(id)scheme;	// 0x37982b99
// converted property setter: - (void)setDocumentState:(id)state;	// 0x379d9e99
- (void)setDrawable:(id)drawable forShapeId:(unsigned long)shapeId;	// 0x37997e59
// converted property setter: - (void)setFontScheme:(id)scheme;	// 0x379dc519
// converted property setter: - (void)setOavState:(id)state;	// 0x379acbe1
// converted property setter: - (void)setPackagePart:(id)part;	// 0x3797fd25
// converted property setter: - (void)setStyleMatrix:(id)matrix;	// 0x37982a69
// converted property setter: - (void)setTableStyleCache:(id)cache;	// 0x379dc49d
// converted property setter: - (void)setTargetBlipCollection:(id)collection;	// 0x3797f49d
- (void)setTargetBulletBlipArray:(id)array;	// 0x379d9fb1
// converted property getter: - (id)styleMatrix;	// 0x379dc809
// converted property getter: - (id)tableStyleCache;	// 0x379deafd
// converted property getter: - (id)targetBlipCollection;	// 0x37991cad
@end

