/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLTextAreaElement.h> // Unknown library


@interface DOMHTMLTextAreaElement (UITextInputAdditions)
- (BOOL)isEditing;	// 0x30e427a9
- (BOOL)isTextControl;	// 0x30e42731
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30e42735
- (id)textInputTraits;	// 0x30e42615
@end

@interface DOMHTMLTextAreaElement (UIWebInteraction)
- (BOOL)nodeCanBecomeFirstResponder;	// 0x30ea7255
@end

@interface DOMHTMLTextAreaElement (UIWebBrowserViewPrivate)
- (BOOL)_requiresAccessoryView;	// 0x30f2c621
- (BOOL)_requiresInputView;	// 0x30f2c625
- (void)_startAssistingDocumentView:(id)view;	// 0x30f2c5d1
- (void)_stopAssistingDocumentView:(id)view;	// 0x30f2c5e5
- (BOOL)_supportsAutoFill;	// 0x30f2c629
- (id)_textFormElement;	// 0x30f2c62d
@end

