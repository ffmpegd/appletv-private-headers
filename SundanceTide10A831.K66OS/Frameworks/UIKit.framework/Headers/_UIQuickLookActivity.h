/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIQuickLookActivity : UIActivity {
	UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
}
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x31f0b0cd
- (void)_cleanup;	// 0x31f0b15d
- (id)activityImage;	// 0x31f0b135
- (id)activityTitle;	// 0x31f0b119
- (id)activityType;	// 0x31f0b10d
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x31f0b145
- (void)performActivity;	// 0x31f0b149
@end

