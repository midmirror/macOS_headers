//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DEWriter.h"

@class NSData;

@interface DEHmac : NSObject <DEWriter>
{
    NSData *_hmac;
    CDStruct_43cfb2c2 _context;
}

+ (BOOL)verify:(id)arg1 computed:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_43cfb2c2 context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *hmac; // @synthesize hmac=_hmac;
- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithKey:(id)arg1 iv:(id)arg2;

@end

