/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import "CoreUI-Structs.h"
#import </libobjc.A.h>
#import "CUIStructuredThemeStorage.h"
#import "CUIStructuredThemeStorage2.h"

@class NSLock, CUICommonAssetStorage, NSString, NSMutableDictionary;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {
	NSMutableDictionary *_cache;	// 4 = 0x4
	CUICommonAssetStorage *_store;	// 8 = 0x8
	NSLock *_cacheLock;	// 12 = 0xc
	NSLock *_storeLock;	// 16 = 0x10
	unsigned _themeIndex;	// 20 = 0x14
	NSString *_bundleID;	// 24 = 0x18
}
@property(readonly, retain) NSString *bundleID;	// G=0x30790951; converted property
@property(readonly, retain) NSMutableDictionary *cache;	// G=0x30790815; converted property
@property(readonly, retain) NSLock *cacheLock;	// G=0x30790825; converted property
- (id)initWithPath:(id)path;	// 0x3078ea6d
- (id)initWithURL:(id)url;	// 0x3078eb61
- (void)_getKeyForAssetClosestToKey:(renditionkeytoken *)key foundAsset:(BOOL *)asset;	// 0x3078f065
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(renditionkeytoken *)key foundAsset:(BOOL *)asset;	// 0x3078f125
- (id)_newRenditionKeyDataFromKey:(renditionkeytoken *)key;	// 0x3078eed5
- (void)_updateKeyWithCompatibilityMapping:(renditionkeytoken *)compatibilityMapping;	// 0x3078ee89
- (BOOL)assetExistsForKey:(renditionkeytoken *)key;	// 0x3078ea19
- (unsigned)authoredWithSchemaVersion;	// 0x3078ec81
- (id)baseGradationKeySignatureForKey:(const renditionkeytoken *)key;	// 0x3078e945
// converted property getter: - (id)bundleID;	// 0x30790951
// converted property getter: - (id)cache;	// 0x30790815
// converted property getter: - (id)cacheLock;	// 0x30790825
- (BOOL)canGetRenditionWithKey:(const renditionkeytoken *)key;	// 0x30790459
- (BOOL)canGetRenditionWithKey:(const renditionkeytoken *)key isFPO:(BOOL *)fpo;	// 0x3079048d
- (void)clearRenditionCache;	// 0x30790835
- (unsigned)colorSpaceID;	// 0x3078e701
- (id)constantNameForElementID:(int)elementID;	// 0x30790891
- (id)constantNameForPartID:(int)partID;	// 0x307908f1
- (id)convertRenditionKeyToKeyData:(renditionkeytoken *)keyData;	// 0x3078f03d
- (void)dealloc;	// 0x3078eb91
- (id)debugDescription;	// 0x30790a0d
- (id)debugDescriptionForKeyList:(const renditionkeytoken *)keyList;	// 0x3078f3d1
- (id)displayNameForElementID:(int)elementID;	// 0x307908c1
- (id)displayNameForPartID:(int)partID;	// 0x30790921
- (unsigned)distilledInCoreUIVersion;	// 0x3078ec61
- (unsigned)documentFormatVersion;	// 0x3078ec41
- (float)fontSizeForFontSizeType:(id)fontSizeType;	// 0x3078ee29
- (BOOL)getFontName:(id *)name baselineOffset:(float *)offset forFontType:(id)fontType;	// 0x3078eda1
- (BOOL)getPhysicalColor:(colordef *)color withName:(id)name;	// 0x3078eca1
- (BOOL)hasPhysicalColorWithName:(id)name;	// 0x3078ed21
- (const renditionkeyfmt *)keyFormat;	// 0x3078e891
- (id)keySignatureForKey:(const renditionkeytoken *)key;	// 0x3078e9b1
- (id)lookupAssetForKey:(renditionkeytoken *)key;	// 0x3078fb01
- (int)maximumRenditionKeyTokenCount;	// 0x3078e729
- (id)prefilteredAssetDataForKey:(renditionkeytoken *)key;	// 0x3078fd31
- (const renditionkeytoken *)renditionKeyForName:(id)name;	// 0x3079078d
- (const renditionkeytoken *)renditionKeyForName:(id)name cursorHotSpot:(CGPoint *)spot;	// 0x307907d5
- (const renditionkeyfmt *)renditionKeyFormat;	// 0x3078f38d
- (id)renditionWithKey:(const renditionkeytoken *)key;	// 0x3078fd8d
- (void)setThemeIndex:(unsigned)index;	// 0x307909fd
- (id)themeStore;	// 0x3078ec31
- (BOOL)usesCUISystemThemeRenditionKey;	// 0x3078e7d9
- (id)zeroCodeGlyphList;	// 0x3079076d
@end

