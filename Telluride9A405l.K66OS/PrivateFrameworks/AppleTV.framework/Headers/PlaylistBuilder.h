/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class CDNDownloadData, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PlaylistBuilder : NSObject {
@private
	NSMutableDictionary *playlists_;	// 4 = 0x4
	CDNDownloadData *selectedCdn_;	// 8 = 0x8
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 12 = 0xc
	int initialPlaylistTrackIndex_;	// 16 = 0x10
	int initialPlaylistStreamIndex_;	// 20 = 0x14
}
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x360f6618; S=0x360f65e4; @synthesize=downloadedContentHeaderDownloadableData_
@property(assign) int initialPlaylistStreamIndex;	// G=0x360f6228; S=0x360f623c; @synthesize=initialPlaylistStreamIndex_
@property(assign) int initialPlaylistTrackIndex;	// G=0x360f6250; S=0x360f6264; @synthesize=initialPlaylistTrackIndex_
@property(retain) NSMutableDictionary *playlists;	// G=0x360f6570; S=0x360f653c; @synthesize=playlists_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x360f65c4; S=0x360f6590; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x360f63ec
- (BOOL)build;	// 0x360f7fa8
- (void)buildMasterPlaylist;	// 0x360f690c
- (BOOL)buildPlaylist:(id)playlist;	// 0x360f6d44
- (void)dealloc;	// 0x360f6314
- (id)description;	// 0x360f6638
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x360f6618
// declared property getter: - (int)initialPlaylistStreamIndex;	// 0x360f6228
// declared property getter: - (int)initialPlaylistTrackIndex;	// 0x360f6250
- (void)metrics;	// 0x360f6224
// declared property getter: - (id)playlists;	// 0x360f6570
- (void)reset;	// 0x360f6288
- (void)selectDownloadedContentHeaderDownloadableDataInitialBitrate;	// 0x360f7b94
// declared property getter: - (id)selectedCdn;	// 0x360f65c4
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x360f65e4
// declared property setter: - (void)setInitialPlaylistStreamIndex:(int)index;	// 0x360f623c
// declared property setter: - (void)setInitialPlaylistTrackIndex:(int)index;	// 0x360f6264
// declared property setter: - (void)setPlaylists:(id)playlists;	// 0x360f653c
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x360f6590
- (void)sortDownloadedContentHeaderDownloadableDataByBitrates;	// 0x360f62dc
@end

