/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"
#import "MediaPlayer-Structs.h"

@class NSArray, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x35d10799; S=0x35d107c1; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x35d10391; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x35d1036d; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x35d103a5; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x35d1037d; 
+ (id)collectionWithItems:(id)items;	// 0x35d0fde9
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x35d10689
+ (id)sortTitlePropertyForGroupingType:(int)groupingType;	// 0x35d105bd
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x35d104b5
- (id)init;	// 0x35d0fe31
- (id)initWithCoder:(id)coder;	// 0x35d100bd
- (id)initWithItems:(id)items;	// 0x35d0fe69
- (id)initWithItemsQuery:(id)itemsQuery;	// 0x35d0ff29
- (id)_init;	// 0x35d10015
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x35d10799
// declared property getter: - (unsigned)count;	// 0x35d10391
- (void)dealloc;	// 0x35d10059
- (void)encodeWithCoder:(id)coder;	// 0x35d10229
- (BOOL)hasDownloadableItem;	// 0x35d97859
- (BOOL)hasDownloadingItem;	// 0x35d97881
// declared property getter: - (id)items;	// 0x35d1036d
- (id)itemsQuery;	// 0x35d10359
// declared property getter: - (int)mediaTypes;	// 0x35d103a5
// declared property getter: - (id)representativeItem;	// 0x35d1037d
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x35d107c1
@end

