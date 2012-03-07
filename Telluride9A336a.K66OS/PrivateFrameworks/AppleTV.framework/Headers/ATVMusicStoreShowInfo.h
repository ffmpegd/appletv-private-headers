/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMusicStoreUtility.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface ATVMusicStoreShowInfo : BRMusicStoreUtility {
@private
	NSString *_key;	// 4 = 0x4
	ATVMediaTypeRef _mediaType;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
	NSMutableDictionary *_episodeData;	// 16 = 0x10
	NSDictionary *_itemDictionary;	// 20 = 0x14
}
@property(assign) long bookmarkTimeInMS;	// G=0x339c4909; S=0x339c4941; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x339c4a01; S=0x339c4a39; converted property
@property(assign) BOOL hasBeenRented;	// G=0x339c4a7d; S=0x339c4ab5; converted property
@property(assign) BOOL isMarkedAsUnwatched;	// G=0x339c4b19; S=0x339c4b51; converted property
@property(readonly, retain) NSDictionary *itemDictionary;	// G=0x33948149; converted property
@property(readonly, retain) NSString *itemID;	// G=0x339c4ba5; converted property
@property(readonly, assign) ATVMediaTypeRef mediaType;	// G=0x339c4b95; converted property
@property(assign) long playCount;	// G=0x339c4985; S=0x339c49bd; converted property
+ (id)_guidForItemDictionary:(id)itemDictionary;	// 0x339c3de5
+ (id)_guidForTypeName:(id)typeName episodeID:(id)anId;	// 0x339c3d9d
+ (id)_lookupShowInfoForTypeName:(id)typeName forEpisodeID:(id)episodeID initIfNotFound:(BOOL)found;	// 0x339c4bb5
+ (void)beginBulkUpdate;	// 0x339c4565
+ (void)commitBulkUpdate:(id)update;	// 0x339c459d
+ (void)fetchBookmarkTimeForAsset:(id)asset completionHandler:(id)handler;	// 0x339c440d
+ (void)fetchRemoteShowInfoForIDs:(id)ids ofType:(ATVMediaTypeRef)type handler:(id)handler;	// 0x339c4399
+ (void)fetchRemoteShowInfoForIDs:(id)ids ofTypes:(id)types handler:(id)handler;	// 0x339c3eb5
+ (id)lookupShowInfoForItemDictionary:(id)itemDictionary initIfNotFound:(BOOL)found;	// 0x339c3c9d
+ (id)lookupShowInfoForMediaItem:(ATVMediaItemRef)mediaItem initIfNotFound:(BOOL)found;	// 0x339c3b79
- (id)_initWithDictionary:(id)dictionary withKey:(id)key withItemID:(id)itemID withMediaType:(ATVMediaTypeRef)mediaType;	// 0x339c4d11
- (id)_objectForKey:(id)key;	// 0x339c4e69
- (void)_saveToDictionary:(id)dictionary;	// 0x339c4e45
- (void)_setObject:(id)object forKey:(id)key;	// 0x339c4e95
// converted property getter: - (long)bookmarkTimeInMS;	// 0x339c4909
- (void)dealloc;	// 0x339c4869
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x339c4a01
// converted property getter: - (BOOL)hasBeenRented;	// 0x339c4a7d
// converted property getter: - (BOOL)isMarkedAsUnwatched;	// 0x339c4b19
// converted property getter: - (id)itemDictionary;	// 0x33948149
// converted property getter: - (id)itemID;	// 0x339c4ba5
- (void)markAsUnwatched;	// 0x339c4fd9
- (void)markAsWatched;	// 0x339c4f6d
// converted property getter: - (ATVMediaTypeRef)mediaType;	// 0x339c4b95
// converted property getter: - (long)playCount;	// 0x339c4985
// converted property setter: - (void)setBookmarkTimeInMS:(long)ms;	// 0x339c4941
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x339c4a39
// converted property setter: - (void)setHasBeenRented:(BOOL)rented;	// 0x339c4ab5
// converted property setter: - (void)setIsMarkedAsUnwatched:(BOOL)unwatched;	// 0x339c4b51
// converted property setter: - (void)setPlayCount:(long)count;	// 0x339c49bd
@end

