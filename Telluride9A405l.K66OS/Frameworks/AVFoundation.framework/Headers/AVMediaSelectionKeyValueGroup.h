/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"

@class NSDictionary, NSArray, AVAsset, AVMediaSelectionOption;

@interface AVMediaSelectionKeyValueGroup : AVMediaSelectionGroup {
	AVAsset *_asset;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_options;	// 16 = 0x10
	AVMediaSelectionOption *_defaultOption;	// 20 = 0x14
}
@property(readonly, retain) AVAsset *asset;	// G=0x347102e1; converted property
@property(readonly, retain) NSDictionary *dictionary;	// G=0x34710305; converted property
@property(readonly, retain) NSArray *options;	// G=0x347102f1; converted property
- (id)initWithAsset:(id)asset dictionary:(id)dictionary;	// 0x34710fb1
- (id)_defaultOption;	// 0x34710319
- (id)_groupID;	// 0x34710e65
- (BOOL)_isKeyValueGroup;	// 0x34710315
- (BOOL)_matchesGroupID:(id)anId mediaType:(id)type;	// 0x34710db1
- (id)_mediaType;	// 0x34710e35
- (id)_optionWithID:(id)anId;	// 0x34710cd5
- (BOOL)allowsEmptySelection;	// 0x34710301
// converted property getter: - (id)asset;	// 0x347102e1
- (void)dealloc;	// 0x34710f3d
// converted property getter: - (id)dictionary;	// 0x34710305
- (unsigned)hash;	// 0x34710e95
- (BOOL)isEqual:(id)equal;	// 0x34710eb5
- (id)mediaSelectionOptionWithPropertyList:(id)propertyList;	// 0x34710b69
// converted property getter: - (id)options;	// 0x347102f1
@end

