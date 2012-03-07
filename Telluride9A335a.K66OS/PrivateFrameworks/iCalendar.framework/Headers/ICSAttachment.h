/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSAttachment : ICSProperty {
}
@property(retain) NSString *fmtype;	// G=0x367758d5; S=0x367758f5; 
@property(assign) BOOL x_apple_autoarchived;	// G=0x36775915; S=0x36775949; 
@property(retain) NSString *x_apple_ews_attachmentid;	// G=0x367759f9; S=0x36775a19; 
@property(retain) NSString *x_apple_filename;	// G=0x367759b9; S=0x367759d9; 
- (id)initWithData:(id)data;	// 0x367757cd
- (id)initWithURL:(id)url;	// 0x36775799
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3677a521
- (id)filename;	// 0x36775825
// declared property getter: - (id)fmtype;	// 0x367758d5
- (BOOL)isBinary;	// 0x36775801
- (void)setData:(id)data;	// 0x36775a39
// declared property setter: - (void)setFmtype:(id)fmtype;	// 0x367758f5
- (void)setURL:(id)url;	// 0x36775ad5
// declared property setter: - (void)setX_apple_autoarchived:(BOOL)autoarchived;	// 0x36775949
// declared property setter: - (void)setX_apple_ews_attachmentid:(id)attachmentid;	// 0x36775a19
// declared property setter: - (void)setX_apple_filename:(id)filename;	// 0x367759d9
// declared property getter: - (BOOL)x_apple_autoarchived;	// 0x36775915
// declared property getter: - (id)x_apple_ews_attachmentid;	// 0x367759f9
// declared property getter: - (id)x_apple_filename;	// 0x367759b9
@end
