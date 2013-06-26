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
@property(retain) id category;	// G=0x10a165; S=0x10a179; converted property
@property(retain) NSString *stationID;	// G=0x10a1d5; S=0x10a1ad; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x109b71
+ (id)favoriteFromAsset:(id)asset;	// 0x109e45
+ (id)favoriteFromMediaItem:(id)mediaItem;	// 0x109ee9
+ (void)initialize;	// 0x109add
- (id)initWithDictionary:(id)dictionary;	// 0x109f41
- (void).cxx_destruct;	// 0x10a3fd
- (id)_initWithMediaItem:(id)mediaItem;	// 0x10a431
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x10a58d
// converted property getter: - (id)category;	// 0x10a165
- (id)description;	// 0x10a0cd
- (void)encodeWithDictionary:(id)dictionary;	// 0x10a035
- (BOOL)isPlayingOrPaused;	// 0x10a1e9
// converted property setter: - (void)setCategory:(id)category;	// 0x10a179
// converted property setter: - (void)setStationID:(id)anId;	// 0x10a1ad
// converted property getter: - (id)stationID;	// 0x10a1d5
@end
