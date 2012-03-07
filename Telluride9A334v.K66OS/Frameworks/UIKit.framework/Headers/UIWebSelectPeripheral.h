/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIFormPeripheral.h"

@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebSelectPeripheral : NSObject <UIFormPeripheral> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 4 = 0x4
	id<UIWebFormControl> _selectControl;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _selectControl;	// G=0x302432c1; S=0x302432d1; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x3024328d; S=0x3024329d; @synthesize
+ (id)createPeripheralWithDOMHTMLSelectElement:(id)domhtmlselectElement;	// 0x302431ad
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement;	// 0x30242f79
// declared property getter: - (id)_selectControl;	// 0x302432c1
// declared property getter: - (id)_selectionNode;	// 0x3024328d
- (id)assistantView;	// 0x3024324d
- (void)beginEditing;	// 0x3024326d
- (void)dealloc;	// 0x302431f5
// declared property setter: - (void)set_selectControl:(id)control;	// 0x302432d1
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x3024329d
@end

