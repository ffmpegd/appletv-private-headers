/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItemWithNoChildren.h> // Unknown library

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {
	NSString *_nameAttribute;	// 24 = 0x18
}
@property(retain) NSString *nameAttribute;	// G=0x35162b51; S=0x35162b2d; @synthesize=_nameAttribute
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35162ae1
- (void)dealloc;	// 0x35162c51
// declared property getter: - (id)nameAttribute;	// 0x35162b51
- (void)parserFoundAttributes:(id)attributes;	// 0x35162b69
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x35162b2d
@end

