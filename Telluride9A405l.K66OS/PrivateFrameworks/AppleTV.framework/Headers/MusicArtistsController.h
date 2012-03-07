/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicController {
@private
	int _mode;	// 124 = 0x7c
	NSString *_genre;	// 128 = 0x80
	NSMutableArray *_artistData;	// 132 = 0x84
}
+ (id)allArtistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x35f0ad55
+ (id)allComposersControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x35f0adf5
+ (id)artistsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f0ae95
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x35f0aedd
- (int)_headerCount;	// 0x35f0bce1
- (void)_setMode:(int)mode;	// 0x35f0bcd1
- (ATVMediaQueryRef)createDataQuery;	// 0x35f0afd9
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x35f0b5bd
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x35f0b37d
- (id)data;	// 0x35f0b0e1
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f0b0b1
- (void)dealloc;	// 0x35f0af61
- (id)errorForNoContent;	// 0x35f0b80d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35f0b985
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35f0ba15
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x35f0b931
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35f0b82d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35f0b93d
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x35f0b709
@end
