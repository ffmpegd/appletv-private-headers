/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItem, NSArray;

@interface MPMediaItemCollection : MPMediaEntity {
@private
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x3014ae3d; S=0x3014ae61; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3014aaa1; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x3014aa7d; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x3014aab5; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x3014aa8d; 
+ (id)collectionWithItems:(id)items;	// 0x3014a5a5
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x3014ad41
+ (id)sortTitlePropertyForGroupingType:(int)groupingType;	// 0x3014ac8d
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x3014abb1
- (id)init;	// 0x3014a5ed
- (id)initWithCoder:(id)coder;	// 0x3014a789
- (id)initWithItems:(id)items;	// 0x3014a625
- (id)_init;	// 0x3014a6e9
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x3014ae3d
// declared property getter: - (unsigned)count;	// 0x3014aaa1
- (void)dealloc;	// 0x3014a72d
- (void)encodeWithCoder:(id)coder;	// 0x3014a8dd
// declared property getter: - (id)items;	// 0x3014aa7d
- (id)itemsQuery;	// 0x3014aa01
// declared property getter: - (int)mediaTypes;	// 0x3014aab5
// declared property getter: - (id)representativeItem;	// 0x3014aa8d
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x3014ae61
@end

