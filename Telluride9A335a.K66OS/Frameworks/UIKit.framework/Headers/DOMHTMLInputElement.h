/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLInputElement.h> // Unknown library


@interface DOMHTMLInputElement (UIWebFormPeripheral)
- (id)createPeripheral;	// 0x33b96ca9
@end

@interface DOMHTMLInputElement (UITextInputAdditions)
- (BOOL)isSecure;	// 0x33bb7a51
- (BOOL)isTextControl;	// 0x33bb7a81
- (int)keyboardType;	// 0x33bb7a99
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x33bb7b95
- (id)text;	// 0x33bb7a41
- (id)textInputTraits;	// 0x33bb7705
@end

@interface DOMHTMLInputElement (UIWebInteraction)
- (BOOL)isLikelyToBeginPageLoad;	// 0x33c30765
- (BOOL)nodeCanBecomeFirstResponder;	// 0x33c307a1
@end

@interface DOMHTMLInputElement (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x33ca43ed
- (BOOL)_isAssistedDateType;	// 0x33ca4175
- (BOOL)_requiresAccessoryView;	// 0x33ca42dd
- (BOOL)_requiresInputView;	// 0x33ca4339
- (void)_startAssistingDocumentView:(id)view;	// 0x33ca4229
- (void)_stopAssistingDocumentView:(id)view;	// 0x33ca4275
- (BOOL)_supportsAccessoryClear;	// 0x33ca4399
- (BOOL)_supportsAutoFill;	// 0x33ca4395
- (id)_textFormElement;	// 0x33ca4409
@end

