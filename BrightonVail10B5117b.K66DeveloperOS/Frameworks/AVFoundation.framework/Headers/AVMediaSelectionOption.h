/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSLocale, AVMediaSelectionOptionInternal, NSString, NSArray;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
	AVMediaSelectionOptionInternal *_mediaSelectionOption;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x302d2db1; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x302d2ccd; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x302d2c85; 
@property(readonly, assign, nonatomic) NSArray *mediaSubTypes;	// G=0x302d2c35; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x302d2c31; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x302d2c3d; 
+ (id)mediaSelectionOptionForAsset:(id)asset group:(id)group dictionary:(id)dictionary hasUnderlyingTrack:(BOOL)track;	// 0x302d2669
- (id)init;	// 0x302d26d1
- (id)_ancillaryDescription;	// 0x302d2871
- (id)_groupID;	// 0x302d2c2d
- (BOOL)_isDesignatedDefault;	// 0x302d2c41
- (id)_title;	// 0x302d2cd1
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302d2db9
// declared property getter: - (id)availableMetadataFormats;	// 0x302d2db1
// declared property getter: - (id)commonMetadata;	// 0x302d2ccd
- (id)copyWithZone:(NSZone *)zone;	// 0x302d27a1
- (void)dealloc;	// 0x302d2751
- (id)description;	// 0x302d27b1
- (id)dictionary;	// 0x302d2bed
- (BOOL)displaysNonForcedSubtitles;	// 0x302d2c89
- (id)group;	// 0x302d2c29
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x302d2c39
// declared property getter: - (BOOL)isPlayable;	// 0x302d2c3d
// declared property getter: - (id)locale;	// 0x302d2c85
// declared property getter: - (id)mediaSubTypes;	// 0x302d2c35
// declared property getter: - (id)mediaType;	// 0x302d2c31
- (id)metadataForFormat:(id)format;	// 0x302d2db5
- (id)optionID;	// 0x302d2bf1
- (id)propertyList;	// 0x302d2dbd
@end

