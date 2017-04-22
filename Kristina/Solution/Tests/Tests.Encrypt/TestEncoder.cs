using Microsoft.VisualStudio.TestTools.UnitTesting;
using Tasks.Encrypt;

namespace Tests.Encrypt
{
    [TestClass]
    public class TestEncoder
    {
        private const string _string = "С тобой был Alexey GAIIST:*:?*()_+";
        private const int _key2 = 20;
        private const int _key1 = 7;

        [TestMethod]
        public void Encription()
        {
            var encoder = new Encoder(_key1, _key2);
            var encode = encoder.Encryption(_string);
            Assert.IsNotNull(encode);

            var result = encoder.Decryption(encode);
            Assert.IsNotNull(result);

            encoder = new Encoder(_key1, _key2);
            var resultFromServer = encoder.Decryption(encode);

            Assert.AreEqual(_string, result);
            Assert.AreEqual(_string, resultFromServer);
        }
    }
}
