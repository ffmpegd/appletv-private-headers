/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface AVFileValidator : NSObject {
	AVFileValidatorPrivate *_priv;	// 4 = 0x4
	NSString *_validationRules;	// 8 = 0x8
}
@property(retain) NSString *validationRules;	// G=0x337929dd; S=0x337929f1; @synthesize=_validationRules
- (id)initWithURL:(id)url;	// 0x33785329
- (id)initWithURL:(id)url options:(id)options;	// 0x33791d4d
- (void)cancel;	// 0x3379274d
- (void)dealloc;	// 0x33785569
- (BOOL)isCompleted;	// 0x33792875
- (BOOL)isStreaming;	// 0x33785555
- (id)notificationForFileCheckResult:(id)fileCheckResult;	// 0x33791e99
- (void)postNotificationForCallback:(id)callback;	// 0x33792389
- (float)progress;	// 0x33792965
// declared property setter: - (void)setValidationRules:(id)rules;	// 0x337929f1
- (id)url;	// 0x337854fd
- (void)validate;	// 0x3378533d
- (id)validateBlocking:(BOOL)blocking;	// 0x33792441
- (void)validateForCameraRoll;	// 0x3379266d
- (BOOL)validateSyncWithError:(id *)error;	// 0x337926a9
// declared property getter: - (id)validationRules;	// 0x337929dd
@end

