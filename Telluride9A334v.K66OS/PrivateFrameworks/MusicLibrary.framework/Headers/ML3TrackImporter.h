/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
@private
	NSDictionary *_nameOrders;	// 4 = 0x4
	ML3MusicLibrary *_library;	// 8 = 0x8
	BOOL _updateSmartPlaylists;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *nameOrders;	// G=0x33810241; S=0x33810251; @synthesize=_nameOrders
@property(assign, nonatomic) BOOL updateSmartPlaylists;	// G=0x33810275; S=0x33810285; @synthesize=_updateSmartPlaylists
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x3380e665
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x3380f119
- (id)_addAlbumForImportTrackProperties:(id)importTrackProperties;	// 0x3380f3f5
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x3380f72d
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x3380f91d
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x3380fac9
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x3380fc2d
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track insertStringsIntoSortMap:(BOOL)map;	// 0x3380fd59
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x3381021d
- (void)dealloc;	// 0x3380e749
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x3380e7a9
// declared property getter: - (id)nameOrders;	// 0x33810241
// declared property setter: - (void)setNameOrders:(id)orders;	// 0x33810251
// declared property setter: - (void)setUpdateSmartPlaylists:(BOOL)playlists;	// 0x33810285
// declared property getter: - (BOOL)updateSmartPlaylists;	// 0x33810275
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x3380ecd5
@end

