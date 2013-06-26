/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UISpringBoardHostedView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject {
	UIView *_sheetView;	// 4 = 0x4
	UISpringBoardHostedView *_remoteView;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	void *_context;	// 20 = 0x14
	int _returnCode;	// 24 = 0x18
}
@property(assign, nonatomic) void *context;	// G=0x32d99a1d; S=0x32d99a2d; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x32d999dd; S=0x32d999ed; @synthesize=_delegate
@property(retain, nonatomic) UISpringBoardHostedView *remoteView;	// G=0x32d999bd; S=0x32d999cd; @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// G=0x32d99a3d; S=0x32d99a4d; @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// G=0x32d999fd; S=0x32d99a0d; @synthesize=_selector
@property(retain, nonatomic) UIView *sheetView;	// G=0x32d9999d; S=0x32d999ad; @synthesize=_sheetView
// declared property getter: - (void *)context;	// 0x32d99a1d
- (void)dealloc;	// 0x32d99939
// declared property getter: - (id)delegate;	// 0x32d999dd
// declared property getter: - (id)remoteView;	// 0x32d999bd
// declared property getter: - (int)returnCode;	// 0x32d99a3d
// declared property getter: - (SEL)selector;	// 0x32d999fd
// declared property setter: - (void)setContext:(void *)context;	// 0x32d99a2d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d999ed
// declared property setter: - (void)setRemoteView:(id)view;	// 0x32d999cd
// declared property setter: - (void)setReturnCode:(int)code;	// 0x32d99a4d
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x32d99a0d
// declared property setter: - (void)setSheetView:(id)view;	// 0x32d999ad
// declared property getter: - (id)sheetView;	// 0x32d9999d
@end
