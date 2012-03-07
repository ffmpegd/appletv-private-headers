/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class NSString;

@interface AVFileValidator : NSObject {
@private
	AVFileValidatorPrivate *_priv;	// 4 = 0x4
	NSString *_validationRules;	// 8 = 0x8
}
@property(retain) NSString *validationRules;	// G=0x339138a5; S=0x33913881; @synthesize=_validationRules
- (id)initWithURL:(id)url;	// 0x33909e35
- (id)initWithURL:(id)url options:(id)options;	// 0x339137a1
- (void)cancel;	// 0x33913991
- (void)dealloc;	// 0x3390a01d
- (BOOL)isCompleted;	// 0x339138f9
- (BOOL)isStreaming;	// 0x3390a009
- (id)notificationForFileCheckResult:(id)fileCheckResult;	// 0x33913c41
- (void)postNotificationForCallback:(id)callback;	// 0x33913659
- (float)progress;	// 0x339138bd
// declared property setter: - (void)setValidationRules:(id)rules;	// 0x33913881
- (id)url;	// 0x33909fb1
- (void)validate;	// 0x33909e49
- (id)validateBlocking:(BOOL)blocking;	// 0x33913a49
- (void)validateForCameraRoll;	// 0x339136c1
- (BOOL)validateSyncWithError:(id *)error;	// 0x339136fd
// declared property getter: - (id)validationRules;	// 0x339138a5
@end

