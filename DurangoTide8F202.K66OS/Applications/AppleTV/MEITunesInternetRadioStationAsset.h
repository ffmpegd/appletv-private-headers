/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "MEITunesInternetRadioStationAsset.h"
#import "MEITunesMediaAsset.h"

@class NSString;
@protocol BRMediaCollection;

@interface MEITunesInternetRadioStationAsset : MEITunesMediaAsset {
	id<BRMediaCollection> _genreCollection;	// 24 = 0x18
	unsigned short _bitRate;	// 28 = 0x1c
	NSString *_streamTitle;	// 32 = 0x20
	NSString *_streamURL;	// 36 = 0x24
	NSString *_streamMessage;	// 40 = 0x28
	double _lastPlayed;	// 44 = 0x2c
}
@property(retain) id lastPlayed;	// G=0x14ef1; S=0x14edd; converted property
+ (id)radioStationFromMediaProvider:(id)mediaProvider withTrackInfo:(TrackInfo *)trackInfo withGenreCollection:(id)genreCollection;	// 0x150ed
- (id)initWithMediaProvider:(id)mediaProvider trackInfo:(TrackInfo *)info;	// 0x150c9
- (id)initWithMediaProvider:(id)mediaProvider withTrackInfo:(TrackInfo *)trackInfo withGenreCollection:(id)genreCollection;	// 0x152d5
- (id)artist;	// 0x15219
- (id)assetID;	// 0x15139
- (void)dealloc;	// 0x15269
- (id)imageProxy;	// 0x14f85
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x14f71
// converted property getter: - (id)lastPlayed;	// 0x14ef1
- (id)mediaSummary;	// 0x151c9
- (id)mediaType;	// 0x14f31
- (id)primaryCollection;	// 0x14b0d
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x14edd
- (void)updateStreamInfo:(ITStreamInfo *)info;	// 0x14fe9
@end

@interface MEITunesInternetRadioStationAsset (Private)
- (void)_loadLastPlayedPersistentValue;	// 0x14dd1
- (void)_setLastPlayedPersistentValue:(id)value;	// 0x14b1d
@end
