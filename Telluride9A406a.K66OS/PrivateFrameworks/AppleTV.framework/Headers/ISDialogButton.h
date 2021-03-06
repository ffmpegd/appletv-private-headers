/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ISDialogButton : NSObject {
@private
	int _actionType;	// 4 = 0x4
	id _parameter;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	int _urlType;	// 16 = 0x10
}
@property(assign) int actionType;	// G=0x331c041d; S=0x331c042d; @synthesize=_actionType
@property(retain) id parameter;	// G=0x331c043d; S=0x331c0451; @synthesize=_parameter
@property(retain) NSString *title;	// G=0x331c0475; S=0x331c0489; @synthesize=_title
@property(assign) int urlType;	// G=0x331c04ad; S=0x331c04bd; @synthesize=_urlType
+ (id)buttonWithTitle:(id)title;	// 0x331bfc05
- (id)_accountURLForURL:(id)url authenticationContext:(id)context;	// 0x331c0109
- (int)_actionTypeForString:(id)string;	// 0x331c0269
- (void)_openURLWithRequest:(id)request;	// 0x331c0349
- (int)_urlTypeForString:(id)string;	// 0x331c03c5
// declared property getter: - (int)actionType;	// 0x331c041d
- (void)dealloc;	// 0x331bfbad
- (BOOL)isEqual:(id)equal superficial:(BOOL)superficial;	// 0x331bfc69
- (void)loadFromDictionary:(id)dictionary;	// 0x331bfd91
// declared property getter: - (id)parameter;	// 0x331c043d
- (void)performDefaultActionForDialog:(id)dialog;	// 0x331bffd5
// declared property setter: - (void)setActionType:(int)type;	// 0x331c042d
- (void)setActionTypeWithString:(id)string;	// 0x331c00d9
// declared property setter: - (void)setParameter:(id)parameter;	// 0x331c0451
// declared property setter: - (void)setTitle:(id)title;	// 0x331c0489
// declared property setter: - (void)setUrlType:(int)type;	// 0x331c04bd
// declared property getter: - (id)title;	// 0x331c0475
// declared property getter: - (int)urlType;	// 0x331c04ad
@end

