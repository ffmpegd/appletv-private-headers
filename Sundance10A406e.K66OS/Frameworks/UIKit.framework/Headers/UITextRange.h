/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x30bb826d; 
@property(readonly, assign, nonatomic) UITextPosition *end;	// G=0x30bb8275; 
@property(readonly, assign, nonatomic, getter=_isCaret) BOOL isCaret;	// G=0x3099ee51; 
@property(readonly, assign, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;	// G=0x309cc3bd; 
@property(readonly, assign, nonatomic, getter=_isRanged) BOOL isRanged;	// G=0x309b5a29; 
@property(readonly, assign, nonatomic) UITextPosition *start;	// G=0x30bb8271; 
// declared property getter: - (BOOL)_isCaret;	// 0x3099ee51
// declared property getter: - (id)_isImpl;	// 0x309cc3bd
// declared property getter: - (BOOL)_isRanged;	// 0x309b5a29
// declared property getter: - (id)end;	// 0x30bb8275
// declared property getter: - (BOOL)isEmpty;	// 0x30bb826d
// declared property getter: - (id)start;	// 0x30bb8271
@end
