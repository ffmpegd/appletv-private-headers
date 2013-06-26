/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MZUniversalPlaybackPositionMediaItem.h"

@class NSURL, BRMediaType, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ATVUniversalPlaybackPositionRecord : XXUnknownSuperclass <MZUniversalPlaybackPositionMediaItem> {
	BRMediaType *_mediaType;	// 4 = 0x4
	NSURL *_podcastURL;	// 8 = 0x8
	NSNumber *_hasBeenPlayed;	// 12 = 0xc
	NSNumber *_bookmarkTime;	// 16 = 0x10
	NSString *_podcastGUID;	// 20 = 0x14
	NSDate *_timestamp;	// 24 = 0x18
	NSString *_itemIdentifier;	// 28 = 0x1c
	NSNumber *_playCount;	// 32 = 0x20
}
@property(retain, nonatomic) NSNumber *bookmarkTime;	// G=0x3bf101; S=0x3bf111; @synthesize=_bookmarkTime
@property(retain, nonatomic) NSNumber *hasBeenPlayed;	// G=0x3bf0e1; S=0x3bf0f1; @synthesize=_hasBeenPlayed
@property(copy, nonatomic) NSString *itemIdentifier;	// G=0x3bf165; S=0x3bf179; @synthesize=_itemIdentifier
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x3bf0a1; S=0x3bf0b1; @synthesize=_mediaType
@property(retain, nonatomic) NSNumber *playCount;	// G=0x3bf189; S=0x3bf199; @synthesize=_playCount
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x3bf121; S=0x3bf135; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x3bf0c1; S=0x3bf0d1; @synthesize=_podcastURL
@property(retain, nonatomic) NSDate *timestamp;	// G=0x3bf145; S=0x3bf155; @synthesize=_timestamp
- (id)_uppDictionary;	// 0x3bf1a9
// declared property getter: - (id)bookmarkTime;	// 0x3bf101
- (void)dealloc;	// 0x3befc5
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x3bf441
// declared property getter: - (id)hasBeenPlayed;	// 0x3bf0e1
// declared property getter: - (id)itemIdentifier;	// 0x3bf165
// declared property getter: - (id)mediaType;	// 0x3bf0a1
// declared property getter: - (id)playCount;	// 0x3bf189
// declared property getter: - (id)podcastGUID;	// 0x3bf121
// declared property getter: - (id)podcastURL;	// 0x3bf0c1
// declared property setter: - (void)setBookmarkTime:(id)time;	// 0x3bf111
// declared property setter: - (void)setHasBeenPlayed:(id)played;	// 0x3bf0f1
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x3bf179
// declared property setter: - (void)setMediaType:(id)type;	// 0x3bf0b1
// declared property setter: - (void)setPlayCount:(id)count;	// 0x3bf199
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x3bf135
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x3bf0d1
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x3bf155
// declared property getter: - (id)timestamp;	// 0x3bf145
@end
