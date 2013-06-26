/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetRadioFavorite : ATVFavorite {
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x14bcf5; S=0x14bd05; converted property
@property(retain) NSString *stationID;	// G=0x14bd7d; S=0x14bd41; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x14b835
+ (id)favoriteFromAsset:(id)asset;	// 0x14ba29
+ (id)favoriteFromMediaItem:(id)mediaItem;	// 0x14bab5
+ (void)initialize;	// 0x14b7bd
- (id)initWithDictionary:(id)dictionary;	// 0x14bb01
- (id)_initWithMediaItem:(id)mediaItem;	// 0x14bee9
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x14bfe9
// converted property getter: - (id)category;	// 0x14bcf5
- (void)dealloc;	// 0x14bba5
- (id)description;	// 0x14bc85
- (void)encodeWithDictionary:(id)dictionary;	// 0x14bc09
- (BOOL)isPlayingOrPaused;	// 0x14bd8d
// converted property setter: - (void)setCategory:(id)category;	// 0x14bd05
// converted property setter: - (void)setStationID:(id)anId;	// 0x14bd41
// converted property getter: - (id)stationID;	// 0x14bd7d
@end
