/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"


__attribute__((visibility("hidden")))
@interface MusicGenresController : MusicController {
}
+ (id)allGenresControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3331ad39
- (int)_headerCount;	// 0x3331b319
- (ATVMediaQueryRef)createDataQuery;	// 0x3331adc5
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x3331ae6d
- (id)errorForNoContent;	// 0x3331ae4d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3331b11d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3331b1ad
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x3331b0c9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3331af95
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3331b0d5
@end

