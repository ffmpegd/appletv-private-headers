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
@property(retain) NSString *fmtype;	// G=0x33c4b1e1; S=0x33c4b201; 
@property(retain) NSString *managed_filename;	// G=0x33c4b2c9; S=0x33c4b2e9; 
@property(retain) NSString *managed_id;	// G=0x33c4b1a1; S=0x33c4b1c1; 
@property(assign) int size;	// G=0x33c4b10d; S=0x33c4b14d; 
@property(assign) BOOL x_apple_autoarchived;	// G=0x33c4b221; S=0x33c4b255; 
@property(retain) NSString *x_apple_ews_attachmentid;	// G=0x33c4b349; S=0x33c4b369; 
@property(retain) NSString *x_apple_filename;	// G=0x33c4b309; S=0x33c4b329; 
- (id)initWithData:(id)data;	// 0x33c4aff9
- (id)initWithURL:(id)url;	// 0x33c4afc5
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x33c507bd
- (id)filename;	// 0x33c4b051
// declared property getter: - (id)fmtype;	// 0x33c4b1e1
- (BOOL)isBinary;	// 0x33c4b02d
// declared property getter: - (id)managed_filename;	// 0x33c4b2c9
// declared property getter: - (id)managed_id;	// 0x33c4b1a1
- (void)setData:(id)data;	// 0x33c4b389
// declared property setter: - (void)setFmtype:(id)fmtype;	// 0x33c4b201
// declared property setter: - (void)setManaged_filename:(id)filename;	// 0x33c4b2e9
// declared property setter: - (void)setManaged_id:(id)anId;	// 0x33c4b1c1
// declared property setter: - (void)setSize:(int)size;	// 0x33c4b14d
- (void)setURL:(id)url;	// 0x33c4b42d
// declared property setter: - (void)setX_apple_autoarchived:(BOOL)autoarchived;	// 0x33c4b255
// declared property setter: - (void)setX_apple_ews_attachmentid:(id)attachmentid;	// 0x33c4b369
// declared property setter: - (void)setX_apple_filename:(id)filename;	// 0x33c4b329
// declared property getter: - (int)size;	// 0x33c4b10d
// declared property getter: - (BOOL)x_apple_autoarchived;	// 0x33c4b221
// declared property getter: - (id)x_apple_ews_attachmentid;	// 0x33c4b349
// declared property getter: - (id)x_apple_filename;	// 0x33c4b309
@end

