## SHA256Util

```java
package vo17245.reggie.common;

import lombok.extern.slf4j.Slf4j;

import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
@Slf4j
public class SHA256Util {
    static MessageDigest digest;
    static{
        try {
            digest=MessageDigest.getInstance("SHA-256");
        } catch (NoSuchAlgorithmException e) {
            log.info("class SHA256Util init failed");
        }
    }
    static public String encode(String text)  {
        byte[] bytes=digest.digest(text.getBytes(StandardCharsets.UTF_8));
        return new String(bytes);
    }
}

```