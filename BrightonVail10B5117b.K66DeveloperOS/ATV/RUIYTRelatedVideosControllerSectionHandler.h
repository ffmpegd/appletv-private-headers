/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"

@class RUIYTRelatedVideosSubMenuController;

__attribute__((visibility("hidden")))
@interface RUIYTRelatedVideosControllerSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling> {
	RUIYTRelatedVideosSubMenuController *_relatedVideosController;	// 4 = 0x4
}
@property(readonly, assign) RUIYTRelatedVideosSubMenuController *relatedVideosController;	// G=0x27b0f5; @synthesize=_relatedVideosController
- (id)initWithRelatedVideosController:(id)relatedVideosController;	// 0x27b001
- (void).cxx_destruct;	// 0x27b115
- (id)itemForIndex:(id)index;	// 0x27b061
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x27b0a9
// declared property getter: - (id)relatedVideosController;	// 0x27b0f5
@end

