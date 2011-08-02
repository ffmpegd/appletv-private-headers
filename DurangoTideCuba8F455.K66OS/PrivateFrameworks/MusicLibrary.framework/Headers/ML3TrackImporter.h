/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
}
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x31c04d85
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x31c04b0d
- (id)_addAlbumForImportTrack:(id)importTrack properties:(id)properties;	// 0x31c05169
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x31c04999
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x31c04841
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x31c04741
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x31c04639
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track;	// 0x31c05815
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x31c04199
- (void)dealloc;	// 0x31c04d3d
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x31c04f7d
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x31c04ca1
@end
