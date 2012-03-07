/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface VSCacheUpdateRequest : NSObject {
	NSString *_modelID;	// 4 = 0x4
	NSString *_classID;	// 8 = 0x8
}
- (id)initWithModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0x305dd00d
- (id)classIdentifier;	// 0x305dc621
- (id)coalescedRequest:(id)request;	// 0x305dcf11
- (void)dealloc;	// 0x305dcfad
- (id)description;	// 0x305dcea9
- (id)modelIdentifier;	// 0x305dc611
@end
