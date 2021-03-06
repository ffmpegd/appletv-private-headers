/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, SSDialogButton, NSArray, NSString;

@interface SSDialog : NSObject {
	NSArray *_buttons;	// 4 = 0x4
	NSDictionary *_dialogDictionary;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x354e0a95; 
@property(readonly, assign, nonatomic) SSDialogButton *defaultButton;	// G=0x354e0ccd; 
@property(readonly, assign, nonatomic) NSDictionary *dialogDictionary;	// G=0x354e0e71; 
@property(readonly, assign, nonatomic) NSString *dialogKind;	// G=0x354e0ea9; 
@property(readonly, assign, nonatomic) NSString *message;	// G=0x354e0df1; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x354e0e0d; 
- (id)init;	// 0x354e08f5
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x354e0909
// declared property getter: - (id)buttons;	// 0x354e0a95
- (void)dealloc;	// 0x354e0a31
// declared property getter: - (id)defaultButton;	// 0x354e0ccd
// declared property getter: - (id)dialogDictionary;	// 0x354e0e71
// declared property getter: - (id)dialogKind;	// 0x354e0ea9
// declared property getter: - (id)message;	// 0x354e0df1
// declared property getter: - (id)title;	// 0x354e0e0d
- (id)valueForProperty:(id)property;	// 0x354e0e29
@end

