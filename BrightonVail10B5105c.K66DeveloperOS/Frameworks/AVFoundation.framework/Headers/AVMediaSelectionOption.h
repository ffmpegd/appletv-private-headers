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
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x3033bdb1; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x3033bccd; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x3033bc85; 
@property(readonly, assign, nonatomic) NSArray *mediaSubTypes;	// G=0x3033bc35; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3033bc31; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x3033bc3d; 
+ (id)mediaSelectionOptionForAsset:(id)asset group:(id)group dictionary:(id)dictionary hasUnderlyingTrack:(BOOL)track;	// 0x3033b669
- (id)init;	// 0x3033b6d1
- (id)_ancillaryDescription;	// 0x3033b871
- (id)_groupID;	// 0x3033bc2d
- (BOOL)_isDesignatedDefault;	// 0x3033bc41
- (id)_title;	// 0x3033bcd1
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x3033bdb9
// declared property getter: - (id)availableMetadataFormats;	// 0x3033bdb1
// declared property getter: - (id)commonMetadata;	// 0x3033bccd
- (id)copyWithZone:(NSZone *)zone;	// 0x3033b7a1
- (void)dealloc;	// 0x3033b751
- (id)description;	// 0x3033b7b1
- (id)dictionary;	// 0x3033bbed
- (BOOL)displaysNonForcedSubtitles;	// 0x3033bc89
- (id)group;	// 0x3033bc29
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x3033bc39
// declared property getter: - (BOOL)isPlayable;	// 0x3033bc3d
// declared property getter: - (id)locale;	// 0x3033bc85
// declared property getter: - (id)mediaSubTypes;	// 0x3033bc35
// declared property getter: - (id)mediaType;	// 0x3033bc31
- (id)metadataForFormat:(id)format;	// 0x3033bdb5
- (id)optionID;	// 0x3033bbf1
- (id)propertyList;	// 0x3033bdbd
@end

