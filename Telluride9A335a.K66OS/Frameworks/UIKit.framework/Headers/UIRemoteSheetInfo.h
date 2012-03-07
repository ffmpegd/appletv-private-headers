/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UIRemoteView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject {
@private
	UIView *_sheetView;	// 4 = 0x4
	UIRemoteView *_remoteView;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	void *_context;	// 20 = 0x14
	int _returnCode;	// 24 = 0x18
}
@property(assign, nonatomic) void *context;	// G=0x33c218a1; S=0x33c218b1; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x33c21861; S=0x33c21871; @synthesize=_delegate
@property(retain, nonatomic) UIRemoteView *remoteView;	// G=0x33c2182d; S=0x33c2183d; @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// G=0x33c218c1; S=0x33c218d1; @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// G=0x33c21881; S=0x33c21891; @synthesize=_selector
@property(retain, nonatomic) UIView *sheetView;	// G=0x33c217f9; S=0x33c21809; @synthesize=_sheetView
// declared property getter: - (void *)context;	// 0x33c218a1
- (void)dealloc;	// 0x33c21799
// declared property getter: - (id)delegate;	// 0x33c21861
// declared property getter: - (id)remoteView;	// 0x33c2182d
// declared property getter: - (int)returnCode;	// 0x33c218c1
// declared property getter: - (SEL)selector;	// 0x33c21881
// declared property setter: - (void)setContext:(void *)context;	// 0x33c218b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c21871
// declared property setter: - (void)setRemoteView:(id)view;	// 0x33c2183d
// declared property setter: - (void)setReturnCode:(int)code;	// 0x33c218d1
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x33c21891
// declared property setter: - (void)setSheetView:(id)view;	// 0x33c21809
// declared property getter: - (id)sheetView;	// 0x33c217f9
@end

