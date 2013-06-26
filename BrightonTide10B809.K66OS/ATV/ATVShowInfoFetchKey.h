/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaType, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface ATVShowInfoFetchKey : XXUnknownSuperclass {
	NSString *_itemID;	// 4 = 0x4
	NSURL *_podcastURL;	// 8 = 0x8
	BRMediaType *_mediaType;	// 12 = 0xc
	NSString *_podcastGUID;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *itemID;	// G=0x3c59a1; S=0x3c59b5; @synthesize=_itemID
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x3c59e5; S=0x3c59f5; @synthesize=_mediaType
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x3c5a05; S=0x3c5a19; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x3c59c5; S=0x3c59d5; @synthesize=_podcastURL
+ (id)fetchKeyFromEpisodeDictionary:(id)episodeDictionary;	// 0x3c596d
- (void)dealloc;	// 0x3c58e1
// declared property getter: - (id)itemID;	// 0x3c59a1
// declared property getter: - (id)mediaType;	// 0x3c59e5
// declared property getter: - (id)podcastGUID;	// 0x3c5a05
// declared property getter: - (id)podcastURL;	// 0x3c59c5
// declared property setter: - (void)setItemID:(id)anId;	// 0x3c59b5
// declared property setter: - (void)setMediaType:(id)type;	// 0x3c59f5
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x3c5a19
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x3c59d5
@end
