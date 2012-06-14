/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
@private
	WebScriptObjectPrivate *_private;	// 4 = 0x4
}
+ (id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x35cdd719
+ (void)initialize;	// 0x3563d485
+ (id)scriptObjectForJSObject:(OpaqueJSValue *)jsobject originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x356ec299
+ (BOOL)throwException:(id)exception;	// 0x35cdd94d
- (OpaqueJSValue *)JSObject;	// 0x35cdd95d
- (BOOL)_hasImp;	// 0x356ecb4d
- (JSObject *)_imp;	// 0x356ed49d
- (id)_init;	// 0x3563d489
- (id)_initWithJSObject:(JSObject *)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x35cdf6dd
- (void)_initializeScriptDOMNodeImp;	// 0x3592c109
- (BOOL)_isSafeScript;	// 0x356ed375
- (RootObject *)_originRootObject;	// 0x35cdd5fd
- (RootObject *)_rootObject;	// 0x356ed3e5
- (void)_setImp:(JSObject *)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x356ecb75
- (void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;	// 0x357bbfad
- (id)callWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x35cdf009
- (void)dealloc;	// 0x356626e5
- (id)evaluateWebScript:(id)script;	// 0x35cdeb51
- (void)finalize;	// 0x35cdd659
- (BOOL)hasWebScriptKey:(id)key;	// 0x35cddf7d
- (id)objectAtIndex:(unsigned)index;	// 0x35cdf925
- (void)removeWebScriptKey:(id)key;	// 0x35cde319
- (void)setException:(id)exception;	// 0x35cdd995
- (void)setValue:(id)value forKey:(id)key;	// 0x356ecf8d
- (void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;	// 0x35cdd9c9
- (id)stringRepresentation;	// 0x35cdde19
- (id)valueForKey:(id)key;	// 0x35cde6b5
- (id)webScriptValueAtIndex:(unsigned)index;	// 0x35cddb95
@end
