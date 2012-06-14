/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {
@private
	NSString *_localizedTitle;	// 4 = 0x4
	NSString *_localizedBody;	// 8 = 0x8
	BOOL _isLongForm;	// 12 = 0xc
}
@property(assign) BOOL isLongForm;	// G=0x3190b991; S=0x3190b9a1; @synthesize=_isLongForm
@property(retain) NSString *localizedBody;	// G=0x3190bb39; S=0x3190bb15; @synthesize=_localizedBody
@property(retain) NSString *localizedTitle;	// G=0x3190bafd; S=0x3190bad9; @synthesize=_localizedTitle
+ (id)warningWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x3190ba31
- (id)initWithCoder:(id)coder;	// 0x3190bb51
- (id)initWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x3190bc25
- (void)dealloc;	// 0x3190ba79
- (void)encodeWithCoder:(id)coder;	// 0x3190b9b1
// declared property getter: - (BOOL)isLongForm;	// 0x3190b991
// declared property getter: - (id)localizedBody;	// 0x3190bb39
// declared property getter: - (id)localizedTitle;	// 0x3190bafd
// declared property setter: - (void)setIsLongForm:(BOOL)form;	// 0x3190b9a1
// declared property setter: - (void)setLocalizedBody:(id)body;	// 0x3190bb15
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x3190bad9
@end
