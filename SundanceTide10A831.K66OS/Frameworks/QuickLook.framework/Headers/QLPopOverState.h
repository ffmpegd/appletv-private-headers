/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIDocumentInteractionControllerDelegate.h"

@class UIDocumentInteractionController, UIBarButtonItem;

@interface QLPopOverState : NSObject <UIDocumentInteractionControllerDelegate> {
	id _delegate;	// 4 = 0x4
	UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
	int _popOverState;	// 12 = 0xc
	UIBarButtonItem *_barButtonItem;	// 16 = 0x10
}
@property(assign) int popOverState;	// G=0x332bf305; S=0x332bf319; @synthesize=_popOverState
- (id)initWithDocumentInteractionController:(id)documentInteractionController delegate:(id)delegate;	// 0x332beeb1
- (id)activityItemForDocumentInteractionController:(id)documentInteractionController;	// 0x332bf2c5
- (void)dealloc;	// 0x332bef29
- (void)didRotate;	// 0x332bf101
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x332bf0a5
- (void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;	// 0x332bf27d
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)documentInteractionController;	// 0x332bf209
- (id)documentInteractionControllerViewControllerForPreview:(id)preview;	// 0x332bf18d
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)documentInteractionController;	// 0x332bf1ad
// declared property getter: - (int)popOverState;	// 0x332bf305
- (void)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x332bf019
- (void)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x332bef8d
- (id)printInfoForDocumentInteractionController:(id)documentInteractionController;	// 0x332bf2e5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x332bf105
// declared property setter: - (void)setPopOverState:(int)state;	// 0x332bf319
- (void)willRotate;	// 0x332bf0fd
@end

