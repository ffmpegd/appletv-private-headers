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
@property(assign, nonatomic) int absoluteOrder;	// G=0x34c127b1; S=0x34c12711; @synthesize=_absoluteOrder
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x34c127c1; S=0x34c12735; @synthesize=_priorOrderedURL
@property(retain) NSSet *propertiesToSet;	// G=0x34c1278d; S=0x34c127a1; @synthesize=_propertiesToSet
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x34c11e1d
- (id)initWithURL:(id)url;	// 0x34c11e09
// declared property getter: - (int)absoluteOrder;	// 0x34c127b1
- (id)additionalHeaderValues;	// 0x34c12089
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x34c1240d
- (void)dealloc;	// 0x34c11e75
- (id)description;	// 0x34c11ed9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x34c124dd
- (id)httpMethod;	// 0x34c1207d
// declared property getter: - (id)priorOrderedURL;	// 0x34c127c1
// declared property getter: - (id)propertiesToSet;	// 0x34c1278d
- (id)requestBody;	// 0x34c121e5
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x34c12711
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x34c12735
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x34c127a1
@end
