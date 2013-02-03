/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSMutableData;

@interface CalDAVMultiGetResponseReader : NSObject <DAVResponseBodyReader> {
    NSMutableDictionary *_calendarData;
    NSMutableDictionary *_etags;
    NSMutableData *_readData;
}

- (void)_calculateResponses;
- (void)_processResponse:(id)arg1;
- (id)calendarData;
- (void)dealloc;
- (id)etags;
- (id)init;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(NSInteger)arg2;
- (void)request:(id)arg1 readResponseBody:(id)arg2;

@end