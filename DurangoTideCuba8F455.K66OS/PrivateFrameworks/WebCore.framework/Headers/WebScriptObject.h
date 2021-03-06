/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
@private
	WebScriptObjectPrivate *_private;	// 4 = 0x4
}
+ (id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x31b28fa1
+ (void)initialize;	// 0x315af16d
+ (id)scriptObjectForJSObject:(OpaqueJSValue *)jsobject originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x3166fcf9
+ (BOOL)throwException:(id)exception;	// 0x31b29241
- (OpaqueJSValue *)JSObject;	// 0x31b29251
- (BOOL)_hasImp;	// 0x316707fd
- (JSObject *)_imp;	// 0x3167109d
- (id)_init;	// 0x316196e5
- (id)_initWithJSObject:(JSObject *)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x31b2ac01
- (void)_initializeScriptDOMNodeImp;	// 0x318517c5
- (BOOL)_isSafeScript;	// 0x31670f95
- (RootObject *)_originRootObject;	// 0x31b28e7d
- (RootObject *)_rootObject;	// 0x31671005
- (void)_setImp:(JSObject *)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x31670821
- (void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;	// 0x31714f39
- (id)callWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x31b2a695
- (void)dealloc;	// 0x31620661
- (id)evaluateWebScript:(id)script;	// 0x31b2a231
- (void)finalize;	// 0x31b28ed5
- (BOOL)hasWebScriptKey:(id)key;	// 0x31b297c5
- (id)objectAtIndex:(unsigned)index;	// 0x31b2ae91
- (void)removeWebScriptKey:(id)key;	// 0x31b29b31
- (void)setException:(id)exception;	// 0x31b29281
- (void)setValue:(id)value forKey:(id)key;	// 0x31670c85
- (void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;	// 0x31b292bd
- (id)stringRepresentation;	// 0x31b29675
- (id)valueForKey:(id)key;	// 0x31b29e91
- (id)webScriptValueAtIndex:(unsigned)index;	// 0x31b29441
@end

