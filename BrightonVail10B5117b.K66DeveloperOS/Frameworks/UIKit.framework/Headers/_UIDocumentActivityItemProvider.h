/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityItemProvider.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentActivityItemProvider : UIActivityItemProvider {
	UIDocumentInteractionController *_documentInteractionController;	// 32 = 0x20
}
@property(assign) UIDocumentInteractionController *documentInteractionController;	// G=0x32fc2275; S=0x32fc2289; @synthesize=_documentInteractionController
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;	// 0x32fc2209
- (id)activityViewControllerPlaceholderItem:(id)item;	// 0x32fc2101
// declared property getter: - (id)documentInteractionController;	// 0x32fc2275
- (id)item;	// 0x32fc20e1
// declared property setter: - (void)setDocumentInteractionController:(id)controller;	// 0x32fc2289
@end

