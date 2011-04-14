/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle;

@interface CalDAVHTTPTrafficLog : NSObject {
	BOOL _enabled;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSFileHandle *_fileHandle;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL enabled;	// G=0x32cff6f1; S=0x32cff701; @synthesize=_enabled
@property(readonly, assign, nonatomic) BOOL isEnabledByDefault;	// G=0x32cff895; 
+ (id)instance;	// 0x32cff851
- (id)init;	// 0x32cff801
// declared property getter: - (BOOL)enabled;	// 0x32cff6f1
// declared property getter: - (BOOL)isEnabledByDefault;	// 0x32cff895
- (void)logDAVRequest:(id)request;	// 0x32cffa9d
- (void)logData:(id)data;	// 0x32cff771
- (void)logString:(id)string;	// 0x32cff7bd
- (void)logStringWithFormat:(id)format;	// 0x32cff8a9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32cff701
@end
