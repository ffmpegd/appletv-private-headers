/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFavorite.h"
#import "AppleTV-Structs.h"

@class NSString;

@interface ATVInternetRadioFavorite : ATVFavorite {
@private
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x3290cb65; S=0x3290cb75; converted property
@property(retain) NSString *stationID;	// G=0x3290ccf9; S=0x3290ccb9; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x3290c6c1
+ (id)favoriteFromAsset:(id)asset;	// 0x3290c89d
+ (id)favoriteFromMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3290c929
+ (void)initialize;	// 0x3290c649
- (id)initWithDictionary:(id)dictionary;	// 0x3290c975
- (id)_initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3290ce75
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x3290cf7d
// converted property getter: - (id)category;	// 0x3290cb65
- (void)dealloc;	// 0x3290ca19
- (id)description;	// 0x3290caf5
- (void)encodeWithDictionary:(id)dictionary;	// 0x3290ca79
- (BOOL)isPlayingOrPaused;	// 0x3290cd09
- (id)mediaAsset;	// 0x3290cbb5
- (ATVMediaItemRef)mediaItemRef;	// 0x3290ccb5
// converted property setter: - (void)setCategory:(id)category;	// 0x3290cb75
// converted property setter: - (void)setStationID:(id)anId;	// 0x3290ccb9
// converted property getter: - (id)stationID;	// 0x3290ccf9
@end
