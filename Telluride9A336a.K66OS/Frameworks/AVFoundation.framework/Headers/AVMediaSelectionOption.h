/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVMediaSelectionOptionInternal, NSLocale, NSArray, NSString;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
	AVMediaSelectionOptionInternal *_mediaSelectionOption;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x314c1351; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x314c134d; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x314c1349; 
@property(readonly, assign, nonatomic) NSArray *mediaSubTypes;	// G=0x314c1339; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x314c1335; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x314c1341; 
+ (id)mediaSelectionOptionWithAssetTrack:(id)assetTrack group:(id)group;	// 0x314c22c5
+ (id)mediaSelectionOptionWithAssetTrack:(id)assetTrack group:(id)group displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x314c2271
+ (id)mediaSelectionOptionWithDictionary:(id)dictionary group:(id)group;	// 0x314c2225
- (id)init;	// 0x314c2601
- (id)_ancillaryDescription;	// 0x314c1329
- (BOOL)_isDesignatedDefault;	// 0x314c1345
- (id)_title;	// 0x314c2311
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x314c1359
// declared property getter: - (id)availableMetadataFormats;	// 0x314c1351
// declared property getter: - (id)commonMetadata;	// 0x314c134d
- (id)copyWithZone:(NSZone *)zone;	// 0x314c25a1
- (void)dealloc;	// 0x314c25b1
- (id)description;	// 0x314c24e5
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x314c133d
// declared property getter: - (BOOL)isPlayable;	// 0x314c1341
// declared property getter: - (id)locale;	// 0x314c1349
// declared property getter: - (id)mediaSubTypes;	// 0x314c1339
// declared property getter: - (id)mediaType;	// 0x314c1335
- (id)metadataForFormat:(id)format;	// 0x314c1355
- (id)propertyList;	// 0x314c135d
@end

