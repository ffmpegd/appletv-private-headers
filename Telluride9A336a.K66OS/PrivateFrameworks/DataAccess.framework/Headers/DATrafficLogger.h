/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DATrafficLogger : NSObject {
	NSString *_filename;	// 4 = 0x4
}
+ (BOOL)enabled;	// 0x3460b0dd
- (id)initWithFilename:(id)filename;	// 0x3460b029
- (void)_ensureCustomLogFile;	// 0x3460adc1
- (void)dealloc;	// 0x3460b091
- (void)logSnippet:(id)snippet;	// 0x3460b0e9
@end

