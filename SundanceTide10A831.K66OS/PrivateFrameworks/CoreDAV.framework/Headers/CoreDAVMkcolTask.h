/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
	NSSet *_propertiesToSet;	// 140 = 0x8c
	BOOL _sendOrder;	// 144 = 0x90
	int _absoluteOrder;	// 148 = 0x94
	NSURL *_priorOrderedURL;	// 152 = 0x98
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x33418481; S=0x334183e1; @synthesize=_absoluteOrder
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x33418491; S=0x33418405; @synthesize=_priorOrderedURL
@property(retain) NSSet *propertiesToSet;	// G=0x3341845d; S=0x33418471; @synthesize=_propertiesToSet
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x33417aed
- (id)initWithURL:(id)url;	// 0x33417ad9
// declared property getter: - (int)absoluteOrder;	// 0x33418481
- (id)additionalHeaderValues;	// 0x33417d59
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x334180dd
- (void)dealloc;	// 0x33417b45
- (id)description;	// 0x33417ba9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x334181ad
- (id)httpMethod;	// 0x33417d4d
// declared property getter: - (id)priorOrderedURL;	// 0x33418491
// declared property getter: - (id)propertiesToSet;	// 0x3341845d
- (id)requestBody;	// 0x33417eb5
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x334183e1
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x33418405
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x33418471
@end
