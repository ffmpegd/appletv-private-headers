/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIYTRelatedVideosSubMenuController;

__attribute__((visibility("hidden")))
@interface RUIYTRelatedVideosControllerSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling> {
	RUIYTRelatedVideosSubMenuController *_relatedVideosController;	// 4 = 0x4
}
@property(readonly, assign) RUIYTRelatedVideosSubMenuController *relatedVideosController;	// G=0x24c86d; @synthesize=_relatedVideosController
- (id)initWithRelatedVideosController:(id)relatedVideosController;	// 0x24c779
- (void).cxx_destruct;	// 0x24c88d
- (id)itemForIndex:(id)index;	// 0x24c7d9
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x24c821
// declared property getter: - (id)relatedVideosController;	// 0x24c86d
@end
