/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIAlertView.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class UITextField, NSString;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {
@private
	id _completionHandler;	// 156 = 0x9c
	int _style;	// 160 = 0xa0
	UITextField *_accountTextField;	// 164 = 0xa4
	UITextField *_passwordTextField;	// 168 = 0xa8
}
@property(copy, nonatomic) NSString *accountTextFieldPlaceholder;	// G=0x301840e1; S=0x30184101; 
@property(readonly, assign, nonatomic) int style;	// G=0x30184201; @synthesize=_style
- (id)initWithStyle:(int)style title:(id)title message:(id)message completionHandler:(id)handler;	// 0x30183e25
- (id)initWithTitle:(id)title message:(id)message completionHandler:(id)handler;	// 0x30183dfd
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x3018401d
// declared property getter: - (id)accountTextFieldPlaceholder;	// 0x301840e1
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30184121
- (void)dealloc;	// 0x3018406d
// declared property setter: - (void)setAccountTextFieldPlaceholder:(id)placeholder;	// 0x30184101
// declared property getter: - (int)style;	// 0x30184201
@end

